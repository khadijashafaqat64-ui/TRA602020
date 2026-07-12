#include <iostream>
#include <string>

using namespace std;
class AIModel 
{
public:
    string modelName;
    string version;
    string algorithm;
    float accuracy;
    bool isDeployed;
};

int main() 
{
    AIModel model1;
    model1.modelName = "ResNet-50";
    model1.version = "v2.1";
    model1.algorithm = "CNN";
    model1.accuracy = 0.91;
    model1.isDeployed = true;
    
    AIModel model2;
    model2.modelName = "SVM-Classifier";
    model2.version = "v1.0";
    model2.algorithm = "SVM";
    model2.accuracy = 0.85;
    model2.isDeployed = false;

    
    AIModel model3;
    model3.modelName = "GPT-Light";
    model3.version = "v4.2";
    model3.algorithm = "Transformer";
    model3.accuracy = 0.95;
    model3.isDeployed = true;

    
    cout << "=== AI Model Card ===\n";
    cout << "Name        : " << model1.modelName << endl;
    cout << "Version     : " << model1.version << endl;
    cout << "Algorithm   : " << model1.algorithm << endl;
    cout << "Accuracy    : " << model1.accuracy << endl;
    cout << "Deployed    : " << (model1.isDeployed ? "true" : "false") <<endl;

    
    cout << "=== AI Model Card ===\n";
    cout << "Name        : " << model2.modelName <<endl;
    cout << "Version     : " << model2.version << endl;
    cout << "Algorithm   : " << model2.algorithm << endl;
    cout << "Accuracy    : " << model2.accuracy << endl;
    cout << "Deployed    : " << (model2.isDeployed ? "true" : "false") <<endl;
	    
    cout << "=== AI Model Card ===\n";
    cout << "Name        : " << model3.modelName << endl;
    cout << "Version     : " << model3.version <<endl;
    cout << "Algorithm   : " << model3.algorithm << endl;
    cout << "Accuracy    : " << model3.accuracy << endl;
    cout << "Deployed    : " << (model3.isDeployed ? "true" : "false") << endl;

    return 0;
}

