#!/bin/bash

SESSION="$(basename $0 .sh)"  


# ========================================================================
# example vars
VENV="venv_example"
COMMAND="python main.py"	# can commonly be "./run.sh" instead of the former
DIR="$HOME/example/directory"
LOG="$DIR/$SESSION.log"


# ========================================================================
# stop on first error 
# then log in log file
set -e  
exec > >(tee -a "$LOG") 2>&1


# ========================================================================
# wont stop if tmux session notif already exists
tmux new -d -s "$SESSION" || true

# clear line, move to directory then run the autorun file
tmux send-keys -t "$SESSION" C-u
tmux send-keys -t "$SESSION" "cd ~"  C-m
# tmux send-keys -t "$SESSION" "source $VENV/bin/activate"  C-m
tmux send-keys -t "$SESSION" "cd $DIR" C-m
tmux send-keys -t "$SESSION" "$COMMAND" C-m
