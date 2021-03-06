//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXBrowserController.h"

#import "IPXAssetsViewControllerCustomLayoutDelegate-Protocol.h"
#import "IPXObjectsControllerChangeReceiver-Protocol.h"

@class IPXAddPeopleLayout, IPXAssetsViewController, IPXLibrary, IPXPeopleAddObjectsController, IPXPeopleAddToolbarViewController, NSString;
@protocol IPXPeopleAddViewControllerDelegate;

@interface IPXPeopleAddViewController : IPXBrowserController <IPXAssetsViewControllerCustomLayoutDelegate, IPXObjectsControllerChangeReceiver>
{
    id <IPXPeopleAddViewControllerDelegate> _delegate;
    IPXLibrary *_library;
    IPXAssetsViewController *_assetsViewController;
    IPXPeopleAddObjectsController *_objectsController;
    IPXAddPeopleLayout *_assetsLayout;
    IPXPeopleAddToolbarViewController *_toolbar;
}

@property(retain, nonatomic) IPXPeopleAddToolbarViewController *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) IPXAddPeopleLayout *assetsLayout; // @synthesize assetsLayout=_assetsLayout;
@property(retain, nonatomic) IPXPeopleAddObjectsController *objectsController; // @synthesize objectsController=_objectsController;
@property(retain, nonatomic) IPXAssetsViewController *assetsViewController; // @synthesize assetsViewController=_assetsViewController;
@property(nonatomic) __weak IPXLibrary *library; // @synthesize library=_library;
@property(nonatomic) __weak id <IPXPeopleAddViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)itemCellClassDefinitionsForCustomLayoutAssetsViewController:(id)arg1;
- (id)layoutForAssetsViewController:(id)arg1;
- (void)objectsController:(id)arg1 metadataChanged:(id)arg2 forObjects:(id)arg3;
- (void)objectsControllerObjectsCollectionChanged:(id)arg1;
- (void)assetsViewControllerSelectionDidChange:(id)arg1 userInfo:(id)arg2;
- (BOOL)assetsViewController:(id)arg1 shouldAnimateChange:(id)arg2;
- (id)newSectionsCollectionForAssetsViewController:(id)arg1;
- (id)newDataSourceForAssetsViewController:(id)arg1;
- (id)bestTargetPersonGivenPersons:(id)arg1;
- (void)a_mergePeople:(id)arg1;
- (void)a_addPeople:(id)arg1;
- (void)a_cancel:(id)arg1;
- (void)viewWillTransitionOutWithContext:(id)arg1;
- (void)dealloc;
- (void)prepareForTransitioningViewInWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadView;
- (id)initWithLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

