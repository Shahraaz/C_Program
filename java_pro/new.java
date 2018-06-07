import java.util.Scanner ;
class Test{
	public static void main(String args[]){
		Scanner in = new Scanner(System.in);
		int studentid = in.nextInt() ;
		String name = in.next();
		int marks[]={0};
		int average = 0 ;
		for(int i=0;i<6;i++){
			marks[i]=in.nextInt();		
		    average += marks[i];
		}
		System.out.println(studentid+name+average/6);
		String s = "HEllo" ;
		
	}
	
}