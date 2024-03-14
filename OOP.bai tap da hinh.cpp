#include<bits/stdc++.h> 

using namespace std;

class Polygon{
	protected:
	    int numSide;
	    int *side;
	public:
		Polygon(int numSide) {
			this->numSide=numSide;
			side=new int[numSide];
			for(int i=0;i<numSide;i++) {
				cin >> side[i];
			}
		}
		int getPerimeter() {
			int perimeter=0;
			for(int i=0;i<numSide;i++) {
				perimeter+=side[i];
			}
			return perimeter;
		}
		void getAll() {
			cout << numSide << endl;
			for(int i=0;i<numSide;i++) {
				cout << side[i] << " ";
			}
			cout << endl << getPerimeter() << endl;
		}
};
class Polyhedron:public Polygon {
	public:
		Polyhedron(int numSide):Polygon(1) {
			this->numSide=numSide;
			for(int i=0;i<numSide;i++) {
				side[i]=side[0];
			}
		}
		int getPerimeter() {
			return side[0] * numSide;
		}
		void getAll() {
			cout << numSide << endl;
			for(int i=0;i<numSide;i++) {
				cout << side[i] << " ";
			}
			cout << endl << getPerimeter() << endl;
		}
};
class Square:public Polyhedron{
	public:
		Square():Polyhedron(4) { };
		void getAll() {
			cout << side[0] << endl << getPerimeter();
		}
};
int main() {
	int soCanh,dodai;
	cin >> soCanh >> dodai;
	Polygon a(soCanh);
	Polyhedron b(dodai);
	Square c;
	a.getAll();
	b.getAll();
	c.getAll();
	
}
