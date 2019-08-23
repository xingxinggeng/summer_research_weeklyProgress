# clcNet weigths convert

The original code is at(https://github.com/dqzhang17/clcnet.torch).

## How to use 

1. First make sure you installed Torch, cuDNN on a machine with CUDA GPU. You can refer  [here](https://github.com/facebook/fb.resnet.torch/blob/master/INSTALL.md) for a step-by-step guide.

2. Run following command 
```bash
th loadData.lua
```

### Please notice that there are two models clcNet-A and clcNet-B. In weights_A file, there is a model structure and 1st and 20th layer weights that are converted from clcNet-A. Please check them to make sure that the formula is correct. Then in order to convert all weights, please modify loadData.lua accordingly!
