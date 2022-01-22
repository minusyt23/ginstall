#include <gtk/gtk.h>
#include "../variables.h"

// Callback goes here

void make_user() {
    win.user.testButton = gtk_button_new_with_label("Very cool button for user");
    
    // add to stack
    gtk_stack_add_titled(GTK_STACK(win.stack), win.user.testButton, "user", "User Setup");
}