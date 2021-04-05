import os
import sys
import json

def validate_template(template):
	try:
		print("Function name " + template["name"])
	except:
		print("Function name missing in template file.")
		exit()
	try:
		str(template["input"][0])
	except:
		print("Input missing in template file.")
		exit()
	try:
		str(template["return_value"])
	except:
		print("Return value missing in template file.")
		exit()
	for input_obj in template["input"]:
		is_param_found = 0
		for parameters in template["parameters"]:
			if list(input_obj.keys())[0] == list(parameters.values())[0]:
				print(list(input_obj.keys())[0] + " +> " + list(parameters.values())[0])
				is_param_found += 1
		if is_param_found <= 0:
			print("Incompatible input / arguments")
			exit()
	for parameters in template["parameters"]:
		is_param_found = 0
		for input_obj in template["input"]:
			if list(input_obj.keys())[0] == list(parameters.values())[0]:
				print(list(input_obj.keys())[0] + " <+ " + list(parameters.values())[0])
				is_param_found += 1
		if is_param_found <= 0:
			print("Incompatible input / arguments")
			exit()

def make_main(template):
	main = """// lgeoffro @ 42\n"""
	for libs in template["dependencies"]:
		main += "#include <{}>\n".format(libs)
	main += "int main(int argc, char *argv[])\n"
	main += "{\n"
	input_c = 0
	for input_obj in template["input"]:
		input_name = list(input_obj.keys())[0] + str(input_c)
		input_value = list(input_obj.values())[0]
		for param in template["parameters"]:
			if list(input_obj.keys())[0] == list(param.values())[0]:
				input_type = list(param.keys())[0]
				print(input_type)
		# ...
	print(main)

def main(template_file):
	template_file = open(template_file)
	template_json = json.load(template_file)
	validate_template(template_json)
	make_main(template_json)		

if __name__ == "__main__":
	try:
		main(sys.argv[1])
	except IndexError:
		print("Specify a template file.")
