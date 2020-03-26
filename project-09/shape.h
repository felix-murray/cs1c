class Shape
{
    public:
        Shape() { } 
        Shape(int initX, int initY) { x = initX, y = initY;}

        void print();
        
        //add UpdateDimensions virtual function
        virtual void updateDimensions() = 0;
    private:
        int x; //x dimension
        int y; //y dimension
};