// Global variables used by gui and installer.

#ifndef VARIABLES_H
#define VARIABLES_H
#include <gtk/gtk.h>

extern struct _win {
    GtkWidget* window;
    GtkWidget* grid;

    GtkWidget* sidebar;
    GtkWidget* stack;

    GtkWidget* infoHbox;
    GtkWidget* installButton;

    struct {
        GtkWidget* testButton;
    } network;
    struct {
        GtkWidget* testButton;
    } partition;
    struct {
        GtkWidget* testButton;
    } user;
    struct {
        GtkWidget* testButton;
    } basepkg;
} win;

#ifdef MAIN
struct _win win;
#endif
#endif