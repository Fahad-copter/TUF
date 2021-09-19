class Solution{
    public:
        int nextGap(int gap){
            if(gap<=1)
            return 0;
            return (gap/2 + gap%2);
        }
        void merge(int arr1[], int arr2[], int n, int m){
            int gap = n+m;
            int i=0, j=0;
            for(gap = nextGap(gap);gap>0;gap=nextGap(gap)){
                for(i=0;i+gap<n;i++){
                    if(arr1[i]>arr1[i+gap]){
                        arr1[i]+=arr1[i+gap]-(arr1[i+gap]=arr1[i]);
                    }
                }
            }
            for(j=(gap>n)?(gap-n):0 ;i<n && j<m;i++,j++){
                if(arr1[i] > arr2[j]){
                    arr1[i]+=arr2[j]-(arr2[j] = arr1[i]);
                }
            }
            if(j<m){
                for(j=0;j+gap<m;j++){
                    if(arr2[j]>arr2[j+gap]){
                        arr2[j]+=arr2[j+gap]-(arr2[gap+j]=arr2[j]);
                    }
                }
            }
        }
    };