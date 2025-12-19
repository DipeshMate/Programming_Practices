public class loot {
    public static int binarysearch(int input[],int element)
{
int start = 0;
int end = input.length-1;

while(start<=end)
{
int mid = (start+end)/2;

if(element == input[mid])
{
    return mid;
}
else if(element > input[mid])
{
    start = mid+1;
}
else { 
    end =  mid-1;
}

}

return -1;
}



public static void main(String[] args)
{
int input[]={2,4,6,8,10,12,14,16,18};
int index = binarysearch(input,6);
System.out.println(index);
}

}
