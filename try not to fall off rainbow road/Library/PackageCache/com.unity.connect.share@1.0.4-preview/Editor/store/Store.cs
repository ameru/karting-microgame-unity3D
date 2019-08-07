using Unity.Connect.Share.UIWidgets.Redux;

namespace Unity.Connect.Share.Editor.store
{
    public class StoreFactory
    {
        private static Store<AppState> _store;

        static void _setupStore()
        {
            _store = new Store<AppState>(ShareReducer.reducer, 
                initialState: new AppState(shareState: new ShareState()),
                middlewares: ShareMiddleware.Create());    
        }
        
        public static Store<AppState> get()
        {
            if (_store == null)
            {
                _setupStore();
            }

            return _store;
        }
    }
}