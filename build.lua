local function endswith(str, ending)
    return str:sub(-#ending) == ending
end

local src = "src/lib"
local output = "build/main"
local dir = io.popen('ls ' .. src)
local files = ''

if dir ~= nil then
    for name in dir:lines() do
     	if endswith(name, ".c") then
     		files = string.format(" %s %s/%s", files, src, name)
     	end 
    end
end

files = "src/main.c" .. files

os.execute(string.format('gcc -Wall -Wextra -o %s %s', output, files))
