#include "NeuralNetwork.hpp"

int main()
{
	/// 1. ����һ������㣬���������㣬һ��������������
	mtl::BPNeuralNet<20, 30, 20, 2> mynn;
	
	/// 2. ��ʼ��
	mynn.init(0.1, 0.8);

    mtl::Matrix<double, 1, 20> inMatrix;
    mtl::Matrix<double, 1, 2> outMatrix;
	
	/// 3. ... ¼����ľ�������
	
	/// 4. ѵ��
    mynn.train(inMatrix, outMatrix, 100);
	
	/// 5. ����
	mynn.simulat(inMatrix, outMatrix);
}