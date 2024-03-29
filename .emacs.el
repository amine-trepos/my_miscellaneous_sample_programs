;;;; .emacs.el - a simple textedit-like setting .emacs file
;;;; tested in GNU Emacs 29.2 and 29.3
;
; Written in 2024 by amine
;
; To the extent possible under law,
; the author(s) have dedicated
; all copyright and related and neighboring rights to this software
; to the public domain worldwide.
; This software is distributed without any warranty.
;
; You should have received
; a copy of the CC0 Public Domain Dedication
; along with this software.
; If not, see <http://creativecommons.org/publicdomain/zero/1.0/>.


;;;; Security
(setq enable-local-variables nil)


;;;; Themes
;;;
;;; Color Themes (OLD School)
;;;
;; in: ~/.emacs.d
;; add: color-theme, GNU Savannah (non gnu), GPL
(add-to-list 'load-path "~/.emacs.d/color-theme")
;; Include 
(require 'color-theme)
(color-theme-initialize)
;;
;; Color Theme files (color-theme-*.el)
;;
;; in: ~/.emacs.d/color-theme/themes
;; add: color-theme-quiet-light.el, Martin Kuhl, MIT licence
(require 'color-theme-quiet-light)
;;;
;;; Custom Themes (NEW School)
;;;
;; Theme files (*-theme.el)
;;
;; in: ~/.emacs.d/themes
;; add: seti-theme.el, Vlad Piersec, GPL
(add-to-list 'custom-theme-load-path "~/.emacs.d/themes")
;;;
;;;
;;; Apply:
;;; Color Theme:
;;(color-theme-quiet-light)
;;;
;;; or Custom Theme:
;;(load-theme 'seti t)
;;;
;;; or Default Theme:
;;(load-theme 'adwaita t)    ;theme of GNOME 3
;;(load-theme 'tango-dark t) ;theme of Tango Desktop Project (dark)
;;(load-theme 'tango t)      ;theme of Tango Desktop Project (light)
;;; For the complete list of the Default themes,
;;; see: Options -> Customize Emacs -> Custom Themes


;;;; CC Mode (C,C++,Objective-C,Java,CORBA IDL,Pike,AWK)
;;;
;; Include
(require 'cc-mode)
;;;
;;; Indentation
;;;
;; set indentation level
(setq-default c-basic-offset 4)
;;
;; set simple indentation mode
(add-to-list 'c-mode-common-hook (lambda () (setq c-syntactic-indentation nil)))
;;
;; set simple tab
(define-key c-mode-base-map (kbd "TAB") 'tab-to-tab-stop)
;;
;; set simple tab deletion
(define-key c-mode-base-map (kbd "DEL") 'delete-backward-char)


;;;; Highlight Numbers
;;;
;; Face files
;; in: ~/.emacs.d/faces
;; add: parent-mode.el, Fanael Linithien, BSD-2-Clause
;; add: highlight-numbers.el, Fanael Linithien, BSD-2-Clause
(add-to-list 'load-path "~/.emacs.d/faces")
;; Include
(require 'parent-mode)
(require 'highlight-numbers)
;;
;; set when programming-related modes
(add-hook 'prog-mode-hook 'highlight-numbers-mode)
;;
;; Default color inherits font-lock-constant-face.
;; instead I will use this color:
;;(set-face-attribute 'highlight-numbers-number nil :foreground "magenta")


;;;; UI
;;;
;;; Cursor
;;;
(setq-default blink-cursor-blinks -1)
;;
;;; Font
;;;
;; add: DejaVuSansMono.ttf, DejaVu Fonts, a Free license 
(add-to-list 'default-frame-alist '(font . "DejaVu Sans Mono-18"))
;;
;;; Line Numbering
;;;
;; Include
(require 'linum)
;; set globally
(global-linum-mode t)
;;
;;; Tab Character
;;;
(setq-default tab-width 4)
(setq-default indent-tabs-mode t)
;;
;;; Tool Bar
;;;
(tool-bar-mode -1)


;;;; Auto Saving & Backup
(setq-default auto-save-default nil)
(setq-default make-backup-files nil)


;;;; Following is GUI Custom Space
;;; If you use GUI Custom or Menu settings,
;;; Emacs will automatically add the appropriate settings below.
;;; Do not write anything manually below this line.

