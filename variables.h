// Global variables used by gui and installer.

#ifndef VARIABLES_H
#define VARIABLES_H
#include <gtk/gtk.h>

extern struct _win {
    GtkWidget* window;
    GtkBox* vbox;

    GtkStackSidebar* sidebar;
    GtkStack* stack;

    GtkGrid* hgrid;
    GtkButton* installButton;

    struct {

    } network;
    struct {

    } partition;
    struct {

    } user;
    struct {

    } basepkg;
} win;

#ifdef MAIN
struct _win win;
#endif
#endif