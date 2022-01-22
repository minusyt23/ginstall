#include <gtk/gtk.h>
#include "../variables.h"

#include "network.c"
#include "partition.c"
#include "user.c"
#include "basepkg.c"

// Callback goes here

void make_sidebar() {
    // Create sidebar
    win.sidebar = gtk_stack_sidebar_new();
    gtk_widget_set_vexpand(win.sidebar, TRUE);

    // Create stack
    win.stack = gtk_stack_new();
    gtk_widget_set_hexpand(win.stack, TRUE);
    gtk_widget_set_vexpand(win.stack, TRUE);

    // Add all pages to stack
    make_network();
    make_partition();
    make_user();
    make_basepkg();


    // sidebar <- stack
    gtk_stack_sidebar_set_stack(GTK_STACK_SIDEBAR(win.sidebar), GTK_STACK(win.stack));

    // Attach to grid
    gtk_grid_attach(GTK_GRID(win.grid), win.sidebar, 0, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(win.grid), win.stack, 1, 0, 1, 1);
}