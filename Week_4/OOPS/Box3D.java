class Box3D extends Box {

    double height;

    Box3D(double length, double breadth, double height) {

        super(length, breadth);

        this.height = height;
    }

    double volume() {
        return length * breadth * height;
    }

    public static void main(String args[]) {

        Box3D obj = new Box3D(12, 6, 8);

        System.out.println("Area = " + obj.area());
        System.out.println("Volume = " + obj.volume());
    }
}