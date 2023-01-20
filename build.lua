local src = "src"
local output = "build/main"
local dir = io.popen('ls ' .. src)
local files = ''

if dir ~= nil then
    for name in dir:lines() do
        files = string.format("%s %s/%s ", files, src, name)
    end
end

os.execute(string.format('gcc -Wall -Wextra -o %s %s', output, files))