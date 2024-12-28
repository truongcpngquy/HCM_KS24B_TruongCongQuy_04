#include<stdio.h>
int main(){
    
    int n;
    int arr[n];
	int t=1;
	while(t){
	printf("\n=========================Menu==========================\n");
    printf("1.Nhap so phan tu va gia tri cho mang\n");
    printf("2.In ra gia tri cac phan tu trong mang\n");
    printf("3.Ðem so luong cac so hoan hao co trong mang\n");
    printf("4.Tim gia tri lon thu 2 trong mang\n");
    printf("5.Them mot phan tu vao trong  mang\n");
    printf("6.Xoa phan tu tai mot vi tri cu the\n");
    printf("7.Sap xep mang theo thu tu tang dan \n");
    printf("8. Tim kiem phan tu trong mang \n");
    printf("9.Sap xep lai mang va hien thi ra toan bo phan tu\n");
    printf("10.Ðao nguoc thu tu cua cac phan tu co trong mang\n");
    printf("\n=======================================================\n");
	int o; printf("nhap lua chon cua ban: "); scanf("%d",&o);
	    switch(o){
			case 1:
            printf("nhap so luong phan tu: ");
	        scanf("%d",&n);
            if(n<=0){
		n=1;
	}
            for(int i=0;i<n;i++){
		    scanf("%d",&arr[i]);
	}
            break;
            case 2:
            
            for(int i=0;i<n;i++){
					printf("phan tu thu[%d]: %d,",i,arr[i]);
				}
                break;
                case 3;
            case 4:
            min=arr[0];
            max=arr[0];
            for(int i=0;i<n;i++){
                if(min>arr[i]){
                    max=arr[i];
                }
                if(max<arr[i]){
                    min=arr[i];
                }
            }
            max2=max
            for(int i=0;i<n;i++){
                if(arr[i<min] && arr[i]>max){
                    max2=arr[i]
                    min=arr[i]    
            }
            printf("Phan tu lon thu 2 trong mang la",max2)
                
        }
        break ;
         case 5
               int addIndex, newValue;
                printf("Moi ban nhap gia tri can them");
                scanf("%d",&newValue);
                printf("Moi ban nhap vi tri can them");
                scanf("%d",&addIndex);
                if(addIndex <0){
                    addIndex = 0;
                }else if(addIndex > n){
                    addIndex = n;
                }
                for(int i = n; i> addIndex; i--){
                    array[i] = array[i-1];
                }
                array[addIndex] = newValue ;
                size++;
                printf("Them thanh cong\n");
                break;
                case 6
                 
                int deleteIndex;
                
                printf("Moi ban nhap vi tri can xoa");
                scanf("%d",&deleteIndex);
                if(editIndex <0 ||editIndex >= n ){
                    printf("Vi tri ko hop le \n");
                    break;
                }
                for (int i = deleteIndex; i < n -1 ; ++i) {
                    array[i] = array[i+1];
                }
                size--;
                printf("Xoa thanh cong\n");
                break;
                case 7:
                	for(int i=0; i<n;i++){
					int max=arr[i];
					for(int j=i+1;j<n;j++){
						if(max<arr[j]){
							arr[i]=arr[j];
							arr[j]=max;
							max=arr[i];
            }
        }
   
        
    return 0;
}
