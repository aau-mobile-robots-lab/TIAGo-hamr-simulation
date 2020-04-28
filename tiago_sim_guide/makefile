##################################################################
# Makefile for LaTeX using latexmk
# 23/02-18 Alexander Korsvang (Alexander@korsvang.net)
##################################################################

TARGET=tiago_sim_guide
OUTPUTDIR=.

LATEXMK_CMD=latexmk -shell-escape -bibtex --pdf -outdir="$(OUTPUTDIR)"

.PHONY: all noisy clean watch

all:
	$(LATEXMK_CMD) --silent "$(TARGET).tex"

noisy:
	$(LATEXMK_CMD) "$(TARGET).tex"

watch:
	$(LATEXMK_CMD) -pvc --silent "$(TARGET).tex"

clean:
	$(LATEXMK_CMD) -c
	$(RM) $(TARGET).thm
