(make-process
 :name "emacs-to-c"
 :buffer (get-buffer-create "emacs-to-c-buffer")
 :command (list (concat (expand-file-name "./") "emacs0"))
)
(process-send-string "emacs-to-c" "Hello\n")
(process-send-eof "emacs-to-c")
