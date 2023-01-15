#include "UserListEntryLibrary.h"

class UListViewBase;
class UUserListEntry;
class IUserListEntry;

bool UUserListEntryLibrary::IsListItemSelected(TScriptInterface<IUserListEntry> UserListEntry) {
    return false;
}

bool UUserListEntryLibrary::IsListItemExpanded(TScriptInterface<IUserListEntry> UserListEntry) {
    return false;
}

UListViewBase* UUserListEntryLibrary::GetOwningListView(TScriptInterface<IUserListEntry> UserListEntry) {
    return NULL;
}

UUserListEntryLibrary::UUserListEntryLibrary() {
}

