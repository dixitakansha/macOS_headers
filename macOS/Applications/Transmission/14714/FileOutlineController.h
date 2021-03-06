//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FileOutlineView, NSMutableArray, NSString, Torrent;

@interface FileOutlineController : NSObject
{
    Torrent *fTorrent;
    NSMutableArray *fFileList;
    FileOutlineView *fOutline;
    NSString *fFilterText;
}

- (BOOL)validateMenuItem:(id)arg1;
- (void)renameSelected:(id)arg1;
- (void)revealFile:(id)arg1;
- (void)setPriority:(id)arg1;
- (void)uncheckAll;
- (void)checkAll;
- (void)setOnlySelectedCheck:(id)arg1;
- (void)setCheck:(id)arg1;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (id)outlineView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)refresh;
- (void)setFilterText:(id)arg1;
- (void)setTorrent:(id)arg1;
- (id)outlineView;
- (void)dealloc;
- (void)awakeFromNib;
- (unsigned long long)findFileNode:(id)arg1 inList:(id)arg2 atIndexes:(id)arg3 currentParent:(id)arg4 finalParent:(id *)arg5;
- (id)menu;

@end

