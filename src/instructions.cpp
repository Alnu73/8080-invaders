//I'll probably use function pointers to handle dispatching
//Opcodes implementations goes here
//Create a lookup table somewhere else with the instructions info (an Instruction class with a function pointer, size and operands is needed first)
//In an emulate cycle of the CPU, an instruction is fetched with a memory read, as well as its info with something like:
//instr=fetch()
//info_instr=lookup_table[instr]
//The instruction is then executed with a std::invoke(instr_info.func, this, operands) or with a instr->func(operands), I need to see exactly how to achieve it