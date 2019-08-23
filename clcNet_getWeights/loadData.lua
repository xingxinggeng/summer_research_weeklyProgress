require 'nn'
require 'cunn'
require 'torch'
require 'cutorch'
require 'cudnn'
require 'paths'
require 'optim'
require 'nngraph'
require 'image'
require 'models/ChannelInterlace'
net = torch.load(arg[1]):float()
net:evaluate()
print(tostring(net))
file = io.open("model_structure.txt", "a")
file:write(tostring(net))
file:close()

print('weight:')
local model = torch.load(arg[1]):cuda()
params, gradParams = model:getParameters()

for i = 1, 20
do
	file = io.open(string.format("weights_layer%d.txt", i), "a")
	file:write(tostring(model:get(i).weight))
	file:close()
end




