//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IOBluetoothUI/NSTableViewDataSource-Protocol.h>

@class NSMutableArray, NSString;

@interface ObjectTableDataSource : NSObject <NSTableViewDataSource>
{
    NSMutableArray *_data;
    id _delegate;
    BOOL _readOnly;
    NSString *_lastSortHeader;
    int _comparisonType;
    BOOL _descendingSort;
}

@property BOOL readOnly; // @synthesize readOnly=_readOnly;
@property id delegate; // @synthesize delegate=_delegate;
@property(retain) NSMutableArray *data; // @synthesize data=_data;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (void)importFromArray:(id)arg1;
- (void)importFromPListFile:(id)arg1;
- (id)getObjectsInColumnAsArray:(id)arg1;
- (void)setItemObject:(id)arg1 atRow:(long long)arg2 columnIdentifier:(id)arg3;
- (id)itemObject:(long long)arg1 columnIdentifier:(id)arg2;
- (void)removeAllItems;
- (void)removeItem:(long long)arg1;
- (long long)insertItem:(long long)arg1;
- (int)findItemObjectRow:(id)arg1 columnIdentifier:(id)arg2;
@property(readonly) unsigned long long count;
- (void)sortDataByColumnIdentifier:(id)arg1 usingSelector:(SEL)arg2;
- (void)sortDataByColumnIdentifier:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

