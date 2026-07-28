# 1337_pool
collction of my 1337 solutions

https://profile-v3.intra.42.fr/

https://www.cprogramming.com/tutorial/c-tutorial.html?inl=pf

https://www.vim-hero.com/lessons/intro-to-modes

https://github.com/wkratos/C-Exam-Practice-1337-42/blob/main/02__ft_strdup/subject.en.txt

## Implementing vorminette and cc commands in nvim

run 'nvim ~/.config/nvim/lua/config/keymaps.lua'

```lua
-- Keymaps are automatically loaded on the VeryLazy event
-- Default keymaps that are always set: https://github.com/LazyVim/LazyVim/blob/main/lua/lazyvim/config/keymaps.lua
-- Add any additional keymaps here
local map = vim.keymap.set

--[[  This is for opening a terinal split

-- Save and check the norm in a terminal split
map("n", "<F5>", function()
  vim.cmd("w")
  vim.cmd("split | term norminette -R CheckForbiddenSourceHeaderflag " .. vim.fn.expand("%"))
end, { desc = "Check Norminette" })

-- Save and compile C file in a terminal split
map("n", "<F6>", function()
  vim.cmd("w")
  vim.cmd("split | term gcc -Wall -Wextra -Werror " .. vim.fn.expand("%") .. " -o " .. vim.fn.expand("%:r"))
end, { desc = "Compile C File" })

-- Run the compiled executable in a terminal split
map("n", "<F7>", function()
  vim.cmd("split | term ./" .. vim.fn.expand("%:r"))
end, { desc = "Run Executable" })

-- Save, compile, and run in one stroke in a terminal split
map("n", "<F8>", function()
  vim.cmd("w")
  vim.cmd(
    "split | term gcc -Wall -Wextra -Werror "
      .. vim.fn.expand("%")
      .. " -o "
      .. vim.fn.expand("%:r")
      .. " && ./"
      .. vim.fn.expand("%:r")
  )
end, { desc = "Compile and Run C File" })

--]]

-- F5: Check Norminette
map("n", "<F5>", function()
  vim.cmd("w")
  local output = vim.fn.system("norminette -R CheckForbiddenSourceHeaderflag " .. vim.fn.expand("%"))
  -- Show green notification for success, red for errors
  local level = vim.v.shell_error == 0 and vim.log.levels.INFO or vim.log.levels.ERROR
  vim.notify(output, level, { title = "Norminette" })
end, { desc = "Check Norminette" })

-- F6: Compile C File
map("n", "<F6>", function()
  vim.cmd("w")
  local cmd = "gcc -Wall -Wextra -Werror " .. vim.fn.expand("%") .. " -o " .. vim.fn.expand("%:r") .. " 2>&1"
  local output = vim.fn.system(cmd)

  if vim.v.shell_error == 0 then
    vim.notify("Compilation successful!", vim.log.levels.INFO, { title = "GCC" })
  else
    vim.notify(output, vim.log.levels.ERROR, { title = "GCC Errors" })
  end
end, { desc = "Compile C File" })

-- F7: Run Executable
map("n", "<F7>", function()
  local cmd = "./" .. vim.fn.expand("%:r") .. " 2>&1"
  local output = vim.fn.system(cmd)
  vim.notify(output, vim.log.levels.INFO, { title = "Output" })
end, { desc = "Run Executable" })

-- F8: Compile and Run
map("n", "<F8>", function()
  vim.cmd("w")
  local compile_cmd = "gcc -Wall -Wextra -Werror " .. vim.fn.expand("%") .. " -o " .. vim.fn.expand("%:r") .. " 2>&1"
  local compile_out = vim.fn.system(compile_cmd)

  -- If compilation fails, stop and show errors
  if vim.v.shell_error ~= 0 then
    vim.notify(compile_out, vim.log.levels.ERROR, { title = "GCC Compilation Failed" })
    return
  end

  -- If it succeeds, run it
  local run_cmd = "./" .. vim.fn.expand("%:r") .. " 2>&1"
  local run_out = vim.fn.system(run_cmd)
  vim.notify(run_out, vim.log.levels.INFO, { title = "Output" })
end, { desc = "Compile and Run" })

```
