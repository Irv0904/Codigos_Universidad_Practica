package herencia_simple_multiple;

class Book{
    String title;
    int year;
    Book(String bname, int yr){
        title = bname;
        year=yr;
    }
    void show_Details(){
        System.out.println("The name of the book is : " + title);
        System.out.println("The year of publication is : " + year);
    }
}
class Phone_Book extends Book{
    String location;
    String type;

    Phone_Book(String bname, int yr, String loc, String typ){
        super(bname, yr);
        location=loc;
        type=typ;
    }
    void show_PhoneBook(){
        System.out.println("The location is : " + location);
        System.out.println("The type is : " + type);
    }
}
class Novel extends Book{
    String style;
    String language;
    String author;
    Novel(String bname, int yr, String st , String lng , String aut){
        super(bname, yr);
        style = st;
        language = lng;
        author = aut;
    }

    void show_Novel(){

        System.out.println("The style is : " + style);
        System.out.println("The language is : " + language);
        System.out.println("The author is : " + author);
    }
}

