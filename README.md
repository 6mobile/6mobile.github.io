# 6808.github.io

This is the web page for MIT 6.1820, starting from the Spring 2019 offering.

## Info pages

Info pages (index, calendar, notes, answers, etc.) are based on
[jemdoc](https://jemdoc.jaboc.net/). Edit `*.jemdoc` and run `make`, which will auto
update the corresponding HTML files. **Avoid editting HTML files directly.** If HTML
files are edited directly, those changes will be overwritten by the next time `make`
is called. See this [cheat sheet](https://jemdoc.jaboc.net/cheatsheet.html) for
jemdoc's syntax.

Edit `MENU` for updating left-column menu.

If a new jemdoc page is added, edit the `DOCS` variable s in `Makefile` accordingly.

To update the calendar page, edit the HTML code within `calendar.jemdoc`.
Unfortunately, updating the dates a tedious process and there is no automated
approach, but this only needs to be done once per semester.

## Lab pages

Dependency: [pandoc](https://pandoc.org/). (Requires installation.)

Edit `*.md` and run `./render` from `labs` directory to generate HTML files.

## Other Notes

This repo is based on the [old website repo](https://github.com/6S062/6MOB), from
Spring 2016 to Spring 2018.

## TODO

- Use Git LFS to store large files (zip files for lab codes)?
- Make the `labs/render` script nicer?
