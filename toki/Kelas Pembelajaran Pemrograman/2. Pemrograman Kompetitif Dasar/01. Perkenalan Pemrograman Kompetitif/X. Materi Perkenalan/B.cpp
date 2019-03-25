/*input
11 6
000000
000000
011100
110011
111111
111000
111111
111111
111001
001100
111011
*/
#include <iostream>

int main(){
	int x_, y_;
	std::cin>>y_>>x_;
	char block[y_][x_];
	for(int y = 0; y < y_; y++){
		for(int x = 0; x < x_; x++){
			std::cin>>block[y][x];
		}
	}
	bool full, again = true;
	int lowest_full_pos;

	while(again){

		// Find the lowest full line with 1
		for(int i = y_-1; i >= 0; i--){
			full = true;
			for(int j = 0; j < x_; j++){
				if(block[i][j] == '0'){
					full = false;
					break;
				}
			}
			if(full){
				lowest_full_pos = i;
				break;
			}
		}

		// again is used to iterate the while loop again later
		// Replace full line with 0
		again = false;
		for(int i = lowest_full_pos; i >= 0; i--){
			full = true;
			for(int j = 0; j < x_; j++){
				if(block[i][j] == '0'){
					full = false;
					break;
				}
			}
			if(full){
				for(int j = 0; j < x_; j++){
					block[i][j] = '0';
				}
				again = true;
			}
		}

		if(!again){
			break;
		}

		// Runtuhkan!!!
		int total_this_row, lowest_0;
		for(int x = 0; x < x_; x++){
			total_this_row = 0;
			for(int y = 0; y < lowest_full_pos; y++){
				if(block[y][x] == '1'){
					block[y][x] = '0';
					total_this_row++;
				}
			}
			// Find the lowest position for 0
			for(int y = 0; y < y_; y++){
				if(block[y][x] == '0'){
					lowest_0 = y;
				}else{
					break;
				}
			}
			while(total_this_row--){
				block[lowest_0][x] = '1';
				lowest_0--;
			}
			//std::cout<<"Row: "<<x<<" 1 above the lowest_full_pos: "<<total_this_row<<'\n';
		}
	}

	for(int y = 0; y < y_; y++){
		for(int x = 0; x < x_; x++){
			std::cout<<block[y][x];
		}
		std::cout<<'\n';
	}

	return 0;
}