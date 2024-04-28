package herencia_simple_multiple;

public class XHerencia2{
    public static void main(String args[]) {
        Phone_Book book_Ph = new Phone_Book("Tata   Yellow Pages", 1991,"Delhi", "Business");
        book_Ph.show_Details();
        book_Ph.show_PhoneBook();
        Novel book_Nov = new Novel("Anna Karenina", 1878, "Psycological", "English", "Tolstoy");
        book_Nov.show_Details();
        book_Nov.show_Novel();
    }
}