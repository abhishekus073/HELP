//Write a program to implement all string operations.
class Lab_5
{
    public static void main(String args[])
    {
        String s1="Hello";
        String s2="World";
        System.out.println("The strings are "+s1+"and"+s2);
        int len1=s1.length();
        int len2=s2.length();
        System.out.println("The length of "+s1+" is :"+len1);
        System.out.println("The length of "+s2+" is :"+len2);
        System.out.println("The concatenation of two strings = "+s1.concat(s2));
        System.out.println("First character of "+s1+" is="+s1.charAt(0));
        System.out.println("The uppercase of "+s1+"is="+s1.toUpperCase());
        System.out.println("The lower case of "+s2+"is="+s2.toLowerCase());
        System.out.println(" the letter e occurs at position"+s1.indexOf("e")+"in"+s1);
        System.out.println("Substring of "+s1+"starting from index 2 and ending at 4 is = "+s1.substring(2,4));
        System.out.println("Replacing 'e' with 'o' in "+s1+"is ="+s1.replace('e','o'));
        boolean check = s1.equals(s2);
        if(check==false)
            System.out.println(""+s1+" and "+s2+" are not same");
        else
            System.out.println("" + s1+" and " + s2+"are same");
    }
}

