//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SidebarViewController.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSArray, NSPopUpButton, NSSearchField, NSString, SymbolsTableView, TSBottomBarView;

__attribute__((visibility("hidden")))
@interface SymbolsController : SidebarViewController <NSTableViewDelegate, NSTableViewDataSource>
{
    NSPopUpButton *oSymbolsSortButton;
    SymbolsTableView *oSymbolsTableView;
    NSSearchField *oSearchField;
    TSBottomBarView *iBottomBarView;
    NSArray *iDisplaySymbols;
    NSString *iDisplayFilterString;
    int iSortType;
    BOOL iSortDecending;
    BOOL iIgnoreSymbolNotification;
}

@property(copy) NSArray *displaySymbols; // @synthesize displaySymbols=iDisplaySymbols;
- (id)displayName;
- (id)maskImageName;
- (id)sidebarIdentifier;
- (void)updateSelectionWithSymbol:(id)arg1;
- (void)updateSelectedSymbolNotification:(id)arg1;
- (void)updateSymbolTable;
- (void)unloadView;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)symbolTableFormattingDidChangeNotification:(id)arg1;
- (void)selectItems:(id)arg1;
- (id)selection;
- (void)sortSymbols:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setDocumentViewController:(id)arg1;
- (void)observerDocument:(id)arg1 flag:(BOOL)arg2;
- (id)lastKeyView;
- (id)initialFirstResponder;
- (id)firstKeyView;
- (void)filterSymbols:(id)arg1;
- (id)emptyOverlayAttributedTitle;
- (id)document;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

