# Description		: Code that will impress u ;)
# Author			: G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
# Date				: ur my date uwu
# HEADERS ================================================================


# ========================================================================
# MAIN 
# ========================================================================

def main():
	print("hi")

# ========================================================================
# MISC FUNCTIONS
# ========================================================================

def section(x:str = "SECTION"):
	ret_val = f"\n {x} {'-' * (40 - len(x))}\n"
	print(ret_val)

if __name__ == '__main__':
	section("START")
	main()
	section("END")