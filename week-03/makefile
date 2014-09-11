TEX := $(filter-out %.part.tex,$(wildcard *.tex))
PDF := $(TEX:%.tex=%.pdf)

CPP := $(filter-out %.part.cpp,$(wildcard *.cpp))
TXT := $(CPP:%.cpp=%.cpp.txt)

# -----------------------------------------------------------------------------

.PHONY: all clean cleanall copy-%

all: $(PDF)

clean:
	latexmk --shell-escape -lualatex -bibtex -pdf -c $(TEX)
	-rm *.nav *.snm *.pyg $(TXT)

cleanall: clean
	-rm $(PDF) $(FIG)

copy-%:
	cp -n ../$*/.gitignore .
	cp -n ../$*/_gvimrc .
	cp -n ../$*/$*.tex .

# -----------------------------------------------------------------------------

.PRECIOUS: %.cpp.txt

%.pdf: %.tex $(CPP) $(TXT)
	latexmk --shell-escape -lualatex -bibtex -pdf -g $<

%.cpp.txt: %.cpp
	clang++ $<; ./a.out > $@; rm a.out

# -----------------------------------------------------------------------------

%: makefile

