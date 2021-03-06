#ifndef VECTOR_H
#define VECTOR_H


class Vector {
public :
    int x;
    int y;

    Vector ();
    Vector (int px, int py);

    void set(int x, int y);
    void add(int x, int y);
    bool operator==(const Vector & v) const;
};

#endif // VECTOR_H
