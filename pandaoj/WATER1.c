/*input
3
4
4 0 100 23
100
8
1 2 2 3 4 5 19 20
2
8
1 2 2 3 4 5 19 20
11
*/
#include <stdio.h>

int tc, arr_n, inp, find, total;

int main(){
	scanf("%d", &tc);
	for(int o = 1; o <= tc; o++){
		scanf("%d", &arr_n);
		int arr[arr_n];
		for(int i = 0; i < arr_n; i++){
			scanf("%d", &inp);
			arr[i] = inp;
		}
		scanf("%d", &find);
		total = 0;
		for(int i = 0; i < arr_n; i++){
			if(arr[i] == find){
				total++;
			}
		}
		if(total != 0){
			printf("Kasus #%d: ADA %d BOTOL DITEMUKAN\n", o, total);
		}else{
			printf("Kasus #%d: TIDAK ADA\n", o);
		}
	}
	return 0;
}