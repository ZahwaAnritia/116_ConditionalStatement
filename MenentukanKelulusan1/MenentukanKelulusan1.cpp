#include <iostream>
using namespace std;

int main()
{

	//siswa mempunyai 2 nilai yaitu

	float nMat, nfisika, rerata;
	string status;

	cout << "Masukkan nilai matematika";
	cin >> nMat;
	cout << "Masukkan nilai Fisika";
	cin >> nfisika;

	rerata = (nfisika + nMat) / 2;

	if (rerata >= 60) {
		status = "Lulus jalur rerata";
	}
	else if (nMat >= 70) {
		status = "Lulus jalur matematika";
	}
	else
	{
		status = "Tidak Lulus";
	}
	cout << "Statusnya adalah" << status << endl;

	system("pause");

	return 0;
}