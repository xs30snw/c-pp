//  Enumeration
enum class Thing {
    book,
    cup,
    pencil
};

Thing thing_on_the_table = Thing::book;


//  Union
union Piano {
    char color[256];
};

Piano my_piano;
my_piano.color = "black";


//  Structure
struct Table {
    char material[256]; // Public by default
    bool four_legs;
private:
    int width;
};


//  Class
class Chair {
    int height; //  Private by default
public:
    char material[256];
    bool four_legs;
};
