.PHONY: clean All

All:
	@echo "----------Building project:[ dowhile - Debug ]----------"
	@cd "dowhile" && "$(MAKE)" -f  "dowhile.mk"
clean:
	@echo "----------Cleaning project:[ dowhile - Debug ]----------"
	@cd "dowhile" && "$(MAKE)" -f  "dowhile.mk" clean
