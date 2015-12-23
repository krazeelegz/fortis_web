Rails.application.routes.draw do
  
  
  root 'application#home'

  get "/defaultsite" => redirect("/home")
  
  get 'home', to: 'application#home' 

  get 'projects', to: 'application#projects'

  get 'team', to: 'application#team'

  get 'story', to: 'application#story'

  get 'services', to: 'application#services'

  get 'partners', to: 'application#partners'

  get 'contact', to: 'application#contact'

  get 'plarrs', to: 'application#plarrs'


end
