interface LibraryUser {
    void registerAccount();
    void requestBook();
}

class KidUser implements LibraryUser {

    private int age;
    private String bookType;

    public void setAge(int age) {
        this.age = age;
    }

    public void setBookType(String bookType) {
        this.bookType = bookType;
    }

    @Override
    public void registerAccount() {
        if (age < 12) {
            System.out.println("You have successfully registered under a Kids Account");
        } else {
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }

    @Override
    public void requestBook() {
        if ("Kids".equalsIgnoreCase(bookType)) {
            System.out.println("Book Issued successfully, please return the book within 10 days");
        } else {
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}

class AdultUser implements LibraryUser {

    private int age;
    private String bookType;

    public void setAge(int age) {
        this.age = age;
    }

    public void setBookType(String bookType) {
        this.bookType = bookType;
    }

    @Override
    public void registerAccount() {
        if (age > 12) {
            System.out.println("You have successfully registered under an Adult Account");
        } else {
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }

    @Override
    public void requestBook() {
        if ("Fiction".equalsIgnoreCase(bookType)) {
            System.out.println("Book Issued successfully, please return the book within 7 days");
        } else {
            System.out.println("Oops, you are allowed to take only adult Fiction books");
        }
    }
}

public class LibraryInterfaceDemo {

    public static void main(String[] args) {

        System.out.println("TEST CASE 1");

        KidUser child = new KidUser();

        child.setAge(10);
        child.registerAccount();

        child.setBookType("Kids");
        child.requestBook();

        System.out.println();

        child.setAge(18);
        child.registerAccount();

        child.setBookType("Fiction");
        child.requestBook();

        System.out.println("\nTEST CASE 2");

        AdultUser adultMember = new AdultUser();

        adultMember.setAge(5);
        adultMember.registerAccount();

        adultMember.setBookType("Kids");
        adultMember.requestBook();

        System.out.println();

        adultMember.setAge(23);
        adultMember.registerAccount();

        adultMember.setBookType("Fiction");
        adultMember.requestBook();
    }
}