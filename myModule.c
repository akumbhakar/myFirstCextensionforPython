#include<Python.h>


static float _add(float num1,float num2){
    return num1+num2;
}

static PyObject* addi(PyObject* self, PyObject* args){
    float num1, num2;
    if(!PyArg_ParseTuple(args,"ff",&num1,&num2)){
        return NULL;
    }
    return Py_BuildValue("f",_add(num1,num2));
}

static PyMethodDef myMethods[] = {
    {"addi",addi,METH_VARARGS,"Add two float number"},
    {NULL,NULL,0,NULL}
};

static struct PyModuleDef myModule = {
    PyModuleDef_HEAD_INIT,
    "myModule",
    "Add two float number",
    -1,
    myMethods
};


PyMODINIT_FUNC PyInit_myModule(void){
    return PyModule_Create(&myModule);          
}