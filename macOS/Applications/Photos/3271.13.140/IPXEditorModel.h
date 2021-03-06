//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXObjectsControllerChangeReceiver-Protocol.h"
#import "IPXViewerSelectionReceiver-Protocol.h"
#import "PFResourceAccessClient-Protocol.h"

@class IPXLibrary, IPXObjectsController, IPXSummaryViewModel, IPXViewerModel, IPXWorkspaceModel, NSDictionary, NSString, RDVersion;
@protocol IPXCollection_deprecated;

@interface IPXEditorModel : NSObject <IPXViewerSelectionReceiver, PFResourceAccessClient, IPXObjectsControllerChangeReceiver>
{
    id <IPXCollection_deprecated> _browserCollection;
    BOOL _syncsCollectionChangeToBrowser;
    id <IPXCollection_deprecated> _collectionInViewer;
    BOOL _collectionNeedsUpdate;
    BOOL _objectsControllerIsBeingMonitored;
    BOOL _selectFirstByDefault;
    BOOL _allowCollectionUpdates;
    BOOL _wantsVideoPlayback;
    IPXWorkspaceModel *_workspace;
    IPXLibrary *_library;
    long long _freezeUndoManager;
    IPXViewerModel *_viewer;
    IPXSummaryViewModel *_summaryView;
    RDVersion *_preferredSelection;
    IPXObjectsController *_objectsController;
    NSDictionary *_objectsControllerOptions;
    CDUnknownBlockType _exitEditBlock;
}

@property(nonatomic) BOOL wantsVideoPlayback; // @synthesize wantsVideoPlayback=_wantsVideoPlayback;
@property(copy, nonatomic) CDUnknownBlockType exitEditBlock; // @synthesize exitEditBlock=_exitEditBlock;
@property(readonly) NSDictionary *objectsControllerOptions; // @synthesize objectsControllerOptions=_objectsControllerOptions;
@property(readonly) IPXObjectsController *objectsController; // @synthesize objectsController=_objectsController;
@property(retain, nonatomic) RDVersion *preferredSelection; // @synthesize preferredSelection=_preferredSelection;
@property(nonatomic) BOOL allowCollectionUpdates; // @synthesize allowCollectionUpdates=_allowCollectionUpdates;
@property(readonly) IPXSummaryViewModel *summaryView; // @synthesize summaryView=_summaryView;
@property(readonly) IPXViewerModel *viewer; // @synthesize viewer=_viewer;
@property long long freezeUndoManager; // @synthesize freezeUndoManager=_freezeUndoManager;
@property(nonatomic) BOOL selectFirstByDefault; // @synthesize selectFirstByDefault=_selectFirstByDefault;
@property(nonatomic) __weak IPXLibrary *library; // @synthesize library=_library;
@property(nonatomic) __weak IPXWorkspaceModel *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)viewerModelSelectionDidChange:(id)arg1;
- (void)_refreshViewerAndCollectionSelection;
- (id)_validSelectionForVersion:(id)arg1;
- (id)_equivalentForVersion:(id)arg1 inList:(id)arg2;
- (void)_updateCollection;
@property(readonly) id <IPXCollection_deprecated> collection;
- (void)setCollection:(id)arg1;
- (void)objectsControllerObjectsCollectionChanged:(id)arg1;
- (void)setObjectsController:(id)arg1 withOptions:(id)arg2;
- (void)resourceWillShutdown:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

