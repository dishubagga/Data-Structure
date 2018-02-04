import java.util.*;
// class quicksort sort the integer array by passing array to method quicksort; 
public class Quicksort{
    private int partition(int a[],int l,int h){
            int pivot = a[h];
            int i = l-1;
            for(int j = l; j < h ; j++){
                if(a[j] <= pivot){
                    i = i+1;
                    int temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                 }
            }
           int  temp = a[i+1];
            a[i+1] = a[h];
            a[h] = temp;
            return i+1;
     }       
    
    private void quicksort(int a[],int l,int h){
        if(l < h){
           int  pos = partition(a, l, h);
            quicksort(a, l, pos-1);
            quicksort(a, pos+1, h);
        }
    }

    public void quicksort(int a[]){
        quicksort(a, 0, a.length - 1);
    }

    public static void main(String[] args){
     //   int a[] = new int[10]; 
        Quicksort q = new Quicksort();
        Scanner scan = new Scanner(System.in);
        System.out.println("enter size");
        int size = scan.nextInt();
        int [] a = new int[size];
        for(int i = 0; i < size; i++)
        {
            a[i] = scan.nextInt();
        }
        q.quicksort(a);
        for(int i = 0;i < size;i++)
            System.out.println(a[i]);
    }

}
