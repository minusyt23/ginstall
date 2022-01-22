#include <gtk/gtk.h>
#include "../variables.h"

// Callback goes here

void make_partition() {
    win.partition.testButton = gtk_button_new_with_label("Very cool button for partition");
    
    // add to stack
    gtk_stack_add_titled(GTK_STACK(win.stack), win.partition.testButton, "part", "Partitioning");
}