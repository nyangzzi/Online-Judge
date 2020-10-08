//배열로 
#include <iostream>
using namespace std;

class MaxHeap {
public:
	MaxHeap() {
		v = new int[100001];
		v[0] = -1;
		size = 0;
	}

	void swap(int a, int b) {
		int tmp = v[a];
		v[a] = v[b];
		v[b] = tmp;
	}

	void insertMax(int x) {
		size++;
		v[size] = x;
		upMax(size);
	}

	void upMax(int child) {
		int parent = child / 2;
		if (parent != 0 && v[child] > v[parent]) {
			swap(child, parent);
			upMax(parent);
		}
	}

	void deleteMax() {
		if (size == 0) {
			cout << 0 << "\n";
		}
		else {
			cout << v[1] << "\n";
			swap(1, size);
			v[size] = 0;
			size--;
			downMax(1);
		}
	}

	void downMax(int parent) {
		int Lchild = parent * 2;
		int Rchild = parent * 2 + 1;
		int child = parent;

		if (Rchild <= size) { //양쪽 자식노드가 다 있을 때
			if (v[Lchild] > v[Rchild]) {
				child = Lchild;
			}
			else {
				child = Rchild;
			}

			if (v[child] > v[parent]) {
				swap(child, parent);
				downMax(child);
			}
		}
		else if (Lchild <= size) { //왼쪽 자식노드만 있을 때
			child = Lchild;
			if (v[child] > v[parent]) {
				swap(child, parent);
				downMax(child);
			}
		}
		
	}

private:
	int* v;
	int size;
};


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test = 0;
	cin >> test;

	MaxHeap maxheap;

	int x = 0;

	for (int t = 0; t < test; t++) {
		cin >> x;
		if (x == 0) {
			maxheap.deleteMax();
		}
		else {
			maxheap.insertMax(x);
		}
	}

}
