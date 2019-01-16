/*input
3
11
7
18
*/
class Main{
	public static void main(String[] args) {
		java.util.Scanner scan = new java.util.Scanner(System.in);
		int total_input = scan.nextInt();
		int inp;
		for(int i = 0; i < total_input; i++){
			inp = scan.nextInt();
			if(inp%2 == 0){
				System.out.println("0");
			}else{
				System.out.println("1");
			}
		}
	}
}