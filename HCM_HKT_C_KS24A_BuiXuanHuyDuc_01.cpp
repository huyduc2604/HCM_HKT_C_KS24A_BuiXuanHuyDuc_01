#include <stdio.h>

int main() {
    int chose = 0,total = 0,count,min,max,sum = 0,value = 0,allow = 1;
    int addValue = 0,addIndex = 0,deleIndex = 0;
    int array[100]; 
    
    do {
        printf("              Menu\n");
        printf("1. Nhap so phan tu\n");
        printf("2. In ra cac gia tri phan tu trong mang\n");
        printf("3. Tim gia tri nho nhat va lon nhat trong mang\n");
        printf("4. In ra tong cua tat ca phan tu\n");
        printf("5. Them mot phan tu vao cuoi mang\n");
        printf("6. Xoa phan tu tai mot vi tri cu the\n");
        printf("7. Sap xep mang theo thu tu tang dan (Bubble sort)\n");
        printf("8. Cho nguoi dung nhap vao mot phan tu, tim kiem phan tu co trong mang (Linear search)\n");
        printf("9. In ra toan bo so nguyen trong mang\n");
        printf("10. Sap xep theo thu tu tang dan (Selection sort)\n");
        printf("11. Thoat\n");
        
        printf("Moi ban nhap chuc nang mong muon: ");
        scanf("%d", &chose);
        
        switch (chose) {
            case 1: // Nhap so phan tu va gia tri cho mang
                printf("Moi ban nhap so phan tu cho mang: ");
                scanf("%d", &value);
                for (int i = 0; i < value; i++) {
                    printf("Nhap gia tri phan tu [%d]: ", i);
                    scanf("%d", &array[i]);
                }
                allow = 0;
                break;
                
            case 2: // In ra cac gia tri phan tu trong mang
                if (allow) {
                    printf("Moi ban nhap vao mang truoc\n");
                } else {
                    printf("Cac phan tu cua mang la:\n");
                    for (int i = 0; i < value; i++) {
                        printf("%d ", array[i]);
                    }
                    printf("\n Mang da duoc nhap xong");
                }
                break;
                
            case 3: // Tim gia tri nho nhat va lon nhat trong mang
                if (allow) {
                    printf("Moi ban nhap vao mang truoc\n");
                } else {
                    min = array[0];
                    max = array[0];
                    for (int i = 0; i < value; i++) {
                        if (array[i] > max) {
                            max = array[i];
                        }
                        if (min > array[i]) {
                            min = array[i];
                        }
                    }
                    printf("Gia tri lon nhat la: %d\n", max);
                    printf("Gia tri nho nhat la: %d\n", min);
                }
                break;
                
            case 4: // Tinh tong cac phan tu trong mang
                if (allow) {
                    printf("Moi ban nhap vao mang truoc\n");
                } else {
                    sum = 0;
                    for (int i = 0; i < value; i++) {
                        sum += array[i];
                    }
                    printf("Tong cua cac phan tu la: %d\n", sum);
                }
                break;
                
            case 5: // Them mot phan tu vao cuoi mang
                if (allow) {
                    printf("Moi ban nhap vao mang truoc\n");
                } else {
                    if (value < 100) { // Ð?m b?o không vý?t quá kích thý?c m?ng
                        printf("Moi ban nhap phan tu muon them: ");
                        scanf("%d", &addValue);
                        array[value] = addValue;
                        value++;
                        printf("Mang sau khi them phan tu:\n");
                        for (int i = 0; i < value; i++) {
                            printf("%d ", array[i]);
                        }
                        printf("\n");
                    } else {
                        printf("Mang da day, khong the them phan tu.\n");
                    }
                }
                break;
                
            case 6: // Xoa phan tu tai mot vi tri cu the
                if (allow) {
                    printf("Moi ban nhap vao mang truoc\n");
                } else {
                    printf("Moi ban nhap vi tri can xoa: ");
                    scanf("%d", &deleIndex);
                    if (deleIndex < 0 || deleIndex >= value) {
                        printf("Vi tri khong hop le.\n");
                    } else {
                        for (int i = deleIndex; i < value - 1; i++) {
                            array[i] = array[i + 1];
                        }
                        value--;
                        printf("Mang sau khi xoa phan tu:\n");
                        for (int i = 0; i < value; i++) {
                            printf("%d ", array[i]);
                        }
                        printf("\nDa nhap xong");
                    }
                }
                break;
                
            case 7: // Sap xep mang theo thu tu tang dan bang Bubble sort
                if (allow) {
                    printf("Moi ban nhap vao mang truoc\n");
                } else {
                    for (int i = 0; i < value - 1; i++) {
                        for (int j = 0; j < value - i - 1; j++) {
                            if (array[j] > array[j + 1]) {
                                int temp = array[j];
                                array[j] = array[j + 1];
                                array[j + 1] = temp;
                            }
                        }
                    }
                    printf("Mang sau khi sap xep tang dan (Bubble sort):\n");
                    for (int i = 0; i < value; i++) {
                        printf("%d ", array[i]);
                    }
                    printf("\nDa nhap xong");
                }
                break;
                
            case 8: // Tim kiem phan tu bang Linear search
                if (allow) {
                    printf("Moi ban nhap vao mang truoc\n");
                } else {
                    int searchValue, found = 0;
                    printf("Moi ban nhap phan tu can tim: ");
                    scanf("%d", &searchValue);
                    for (int i = 0; i < value; i++) {
                        if (array[i] == searchValue) {
                            printf("Phan tu %d nam o vi tri %d trong mang.\n", searchValue, i);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Phan tu %d khong ton tai trong mang.\n", searchValue);
                    }
                }
                break;
                
            case 9: // In ra toan bo so nguyen trong mang
                if (allow) {
                    printf("Moi ban nhap vao mang truoc\n");
                } else {
                    printf("Toan bo cac so nguyen trong mang la:\n");
                    for (int i = 0; i < value; i++) {
                        printf("%d ", array[i]);
                    }
                    printf("\nDa nhap xong");
                }
                break;
                
            case 10: // Sap xep mang theo thu tu tang dan bang Selection sort
                if (allow) {
                    printf("Moi ban nhap vao mang truoc\n");
                } else {
                    for (int i = 0; i < value - 1; i++) {
                        int minIndex = i;
                        for (int j = i + 1; j < value; j++) {
                            if (array[j] < array[minIndex]) {
                                minIndex = j;
                            }
                        }
                        int temp = array[minIndex];
                        array[minIndex] = array[i];
                        array[i] = temp;
                    }
                    printf("Mang sau khi sap xep tang dan (Selection sort):\n");
                    for (int i = 0; i < value; i++) {
                        printf("%d ", array[i]);
                    }
                    printf("\nDa nhap xong");
                }
                break;
                
            case 11: // Thoat
                printf("Tam biet va hen gap lai ban nhe <3\n");
                break;
                
            default:
                printf("Lua chon khong hop le, vui long chon lai.\n");
                break;
        }
        
    } while (chose != 11 && chose > 11);

    return 0;
}

