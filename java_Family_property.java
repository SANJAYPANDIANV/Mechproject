class inheritance {
    public static void main(String[] args) {
        Father f = new Father() ;
        System.out.println("father gender : " + f.gender);
        System.out.println("Father property : " + f.property);
        f.display();

        daughter d = new daughter() ;
        System.out.println("daughter gender " + d.gender);
        System.out.println("Daughter property : " + d.property);
        d.display();
        
    }
}

class grandfather {
    char gender = 'M';
    int property = 3000000 ;

    void display() {
        System.out.println("Grandfather'\s property");
    }

}
class Father extends grandfather {

    void display(){
        System.out.println("Father\'s property");
    }

}
class son extends Father {

    int property = 300000/2 ;

    void display(){
        System.out.println("son\'s inheritance");
    } 

}
class daughter extends Father {
    char gender = 'F' ;
    int property = 300000/2 ;

    void display(){
        System.out.println("daughter\'s inheritance");
    }
}