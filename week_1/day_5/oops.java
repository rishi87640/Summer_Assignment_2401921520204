interface LibraryUser 
{
    void registerAccount();

    void requestBook();
}

class KidUser impliments LibraryUser
{
    int age;
    string bookType;
   
    public void registerAccount()
    {
      if(age<12)
      {
        System.out.println("you have successfully registered under a  kid account");
        
      }
      else
      {
        System.out.println("sorry,age must be less than 12 years to register as a kid");

      }


    }

    public void requestBook()
    {
        if(bookType.equals("kids"))
        {
            System.out.println("book issued successfully, please return the book wothin 10 days");
        }
        else
        {
            System.out.println("sorry, you are allowed to take only kids books");
        }

    }


class AdultUseer impliments LibraryUser
{
    int age;
    string bookType;

    public void registerAccount()
    {
        if(age>12)
        {
            System.out.println("you have successfully registered under an adult account");    
        }
        else
        {
            System.out.println("sorry, age must be greater than 12 to register as an adult");
        }
        
    }

    public void requestBook()
    {
        if(bookType.equals("Fiction"))
        {
            System.out.println("book issued successfully , please return the book within 7 days");
        }
        else
          {
            System.out.println("oops , you are allowed to take only adult fiction books");
          }
    }

    KidUser kid = new KidUser();

    kid.age = 10;
    kid.registerAccount();

    kid.age = 18;
    kid.registerAccount();


    kid.bookType = "kids";
    kid.requestBook();

    kid.bookType = "Fiction";
    kid.requestBook();


    AdultUser adult = new AdultUser();

     adult.age = 5;
    adult.registerAccount();

    adult.age = 20;
    adult.registerAccount();

    adult.bookType = "kids";
    adult.requestBook();

    adult.booktype = "Fiction";
    adult.requestBook();
    



}

}